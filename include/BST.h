//---------------------------------------------------------------------------------------------------
#ifndef BST_H
#define BST_H

//---------------------------------------------------------------------------------------------------

#include <iostream>

//---------------------------------------------------------------------------------------------------

using namespace std;

//---------------------------------------------------------------------------------------------------
/**
 * @class BST
 * @brief BST class is a template class that contains all functions of a BST required in this assignment. This class does not have any implementations.
 *
 * @author Anu Anton Pradeep
 * @version 01
 * @date 24/10/2021 Anu AP
 *
 * @bug My program has no bugs.
 */
template <class T>
struct node
{
    T data;
    node* left;
    node* right;
};

//---------------------------------------------------------------------------------------------------

template <class T>
class BST
{
public:

    /** \brief Default constructor for bst
     * \param None
     * \return None
     */
    BST();

    /** \brief Default destructor for bst
     * \param None
     * \return None
     */
    ~BST();

    /** \brief Public function to insert elements into the bst
     * \param T& data
     * \return None
     */
    void Insert(T &data);

    /** \brief Public function to perform inOrder traversal in bst
     * \param Function pointer
     * \return None
     */
    void InOrder(void(*fptr)(T&));

    /** \brief Public function to perform preOrder traversal in bst
     * \param Function pointer
     * \return None
     */
    void PreOrder(void(*fptr)(T&));

    /** \brief Public function to perform postOrder traversal in bst
     * \param Function pointer
     * \return None
     */
    void PostOrder(void(*fptr)(T&));

    /** \brief Public function to delete nodes from the bst
     * \param None
     * \return None
     */
    void DeleteTree();

    /** \brief Public function to search elements in the bst
     * \param T& data
     * \return Bool true/false
     */
    bool Search(T &data);

    /** \brief Public overloaded assignment operator for bst
     * \param const BST<T>& that
     * \return BST<T>
     */
    BST<T>& operator= (const BST<T>& that);

    /** \brief Public copy constructor for bst
     * \param const BST<T>& thatTree
     * \return None
     */
    BST(const BST<T>& thatTree); // copy constructor

    /** \brief Public function to get the size of the BST
     * \param None
     * \return Int size
     */
    int size();


private:

    node<T>* root; /// private node type variable to refer to the root data

    /** \brief Private insert function to add elements into the bst
     * \param node<T>* parent, T &data
     * \return None
     */
    void Insert(node<T>* parent, T &data);

    /** \brief Private function to perform inOrder traversal in bst
     * \param node<T>* parent, function pointer
     * \return None
     */
    void InOrder(node<T>* parent,void(*fptr)(T&));

    /** \brief Private function to perform preOrder traversal in bst
     * \param node<T>* parent, function pointer
     * \return None
     */
    void PreOrder(node<T>* parent, void(*fptr)(T&));

    /** \brief Private function to perform postOrder traversal in bst
     * \param node<T>* parent, function pointer
     * \return None
     */
    void PostOrder(node<T>* parent, void(*fptr)(T&));

    /** \brief Private function delete nodes from bst
     * \param node<T>* parent
     * \return None
     */
    void DeleteTree (node<T>* &parent);

    /** \brief
     * \param node<T>* &parent, T &data
     * \return Bool true/false
     */
    bool Search(node<T>* &parent, T &data);

    /** \brief Private copy constructor
     * \param node<T>* &thisTree, node<T>* thatTree
     * \return None
     */
    void Copy(node<T>* &thisTree, node<T>* thatTree); //private copy constructor

    /** \brief Private function to destroy the bst
     * \param node<T>* parent
     * \return None
     */
    void Destruct(node<T>* parent);

    /** \brief Private function to get the size of the bst
     * \param node<T>* parent
     * \return Int size
     */
    int size(node<T>* parent);

};
//---------------------------------------------------------------------------------------------------
template <class T>
int BST<T>::size()
{
    return size(root);
}

//---------------------------------------------------------------------------------------------------
template <class T>
int BST<T>::size(node<T>* parent)
{
    if (parent == NULL)
        return 0;
    else
        return(size(parent->left) + 1 + size(parent->right));
}

//---------------------------------------------------------------------------------------------------
template <class T>
BST<T>::BST(const BST<T>& thatTree)
{
    if(thatTree.root == nullptr)
    {
        root = nullptr;
    }
    else
    {
        Copy(root, thatTree.root);
    }
}

//---------------------------------------------------------------------------------------------------
template <class T>
void BST<T>::Copy(node<T>* &thisTree, node<T>* thatTree)
{
    if(thatTree == nullptr)
        thisTree  = nullptr;
    else
    {
        thisTree = new node<T>;
        thisTree->data = thatTree->data;
        Copy(thisTree->left, thatTree->left);
        Copy(thisTree->right, thatTree->right);
    }
}

//---------------------------------------------------------------------------------------------------
template <class T>
BST<T>& BST<T>::operator=(const BST<T>& that)
{
    if(this != &that)
    {
        if(that.root == nullptr)
        {
            root = nullptr;
        }
        else
            Copy(root, that.root);
    }
    return *this;
}

//---------------------------------------------------------------------------------------------------
template <class T>
BST<T>::~BST()
{
    if(root != nullptr)
    {
        Destruct(root);
    }
}

//---------------------------------------------------------------------------------------------------
template <class T>
void BST<T>::Destruct(node<T>* parent)
{

	if(parent != nullptr) {

		if( (parent->left == nullptr) && (parent->right == nullptr) ) {
			delete parent;
			parent = nullptr;
		} else {
			Destruct(parent->left);
			Destruct(parent->right);
		}
	}

}

//---------------------------------------------------------------------------------------------------

template <class T>
BST<T>::BST()
{
    root = nullptr;
}

//---------------------------------------------------------------------------------------------------

template <class T>
void BST<T>::Insert(T &data)
{
    if(root == nullptr)
    {
        node<T>* temp = new node<T>;
        temp->data = data;
        temp->left = temp->right = nullptr;
        root = temp;
    }
    else
    {
        Insert(root, data);
    }
}

//---------------------------------------------------------------------------------------------------

template <class T>
void BST<T>::Insert(node<T>* parent, T &data)
{
    if(data < parent->data)
    {
        if(parent->left == nullptr)
        {
            node<T>* temp = new node<T>;
            temp->data = data;
            temp->left = temp->right = nullptr;
            parent->left = temp;
        }
        else
        {
            Insert(parent->left, data);
        }
    }
    else
    {
        if(data > parent->data)
        {
            if(parent->right == nullptr)
            {
                node<T>* temp = new node<T>;
                temp->data = data;
                temp->right = temp->left = nullptr;
                parent->right = temp;
            }
            else
            {
                Insert(parent->right, data);
            }
        }
    }
}

//---------------------------------------------------------------------------------------------------

template <class T>
void BST<T>::InOrder(void(*fptr)(T&))
{
    if(root != nullptr)
    {
        InOrder(root,fptr);
    }
}

//---------------------------------------------------------------------------------------------------

template <class T>
void BST<T>::InOrder(node<T>* parent,void(*fptr)(T&))
{
    if(parent != nullptr)
    {
        InOrder(parent->left,fptr);
        fptr(parent->data);
        InOrder(parent->right, fptr);
    }
}

//---------------------------------------------------------------------------------------------------

template <class T>
void BST<T>::PreOrder(void(*fptr)(T&))
{
    if(root != nullptr)
    {
        PreOrder(root,fptr);
    }
}

//---------------------------------------------------------------------------------------------------

template <class T>
void BST<T>::PreOrder(node<T>* parent,void(*fptr)(T&))
{
    if(parent != nullptr)
    {
        fptr(parent->data);
        PreOrder(parent->left,fptr);
        PreOrder(parent->right,fptr);
    }
}

//---------------------------------------------------------------------------------------------------

template <class T>
void BST<T>::PostOrder(void(*fptr)(T&))
{
    if(root != nullptr)
    {
        PostOrder(root,fptr);
    }
}

//---------------------------------------------------------------------------------------------------

template <class T>
void BST<T>::PostOrder(node<T>* parent,void(*fptr)(T&))
{
    if(parent != nullptr)
    {
        PostOrder(parent->left,fptr);
        PostOrder(parent->right,fptr);
        fptr(parent->data);
    }
}

//---------------------------------------------------------------------------------------------------

template <class T>
void BST<T>::DeleteTree()
{
    if(root != nullptr)
    {
        DeleteTree(root);
    }
}

//---------------------------------------------------------------------------------------------------

template <class T>
void BST<T>::DeleteTree(node<T>* &parent)
{
    if (parent != nullptr)
    {
        DeleteTree(parent->left);
        DeleteTree(parent->right);
        delete parent;
        parent = nullptr;
    }
}

//---------------------------------------------------------------------------------------------------

template <class T>
bool BST<T>::Search(T &data)
{
    if (root != nullptr)
    {
        if(root-> data != data)
        {
            return Search(root,data);
        }
        else
        {
            data = root->data;
            return true;
        }
    }
    else
    {
        return false;
    }
}

//---------------------------------------------------------------------------------------------------

template <class T>
bool BST<T>::Search(node<T>* &parent,T &data)
{
    if(parent!=nullptr)
    {
        if (data == parent-> data)
        {
            data = parent->data;
            return true;
        }
        else
        {
            if (data < parent-> data)
            {
                return Search(parent->left,data);
            }
            else
            {
                if (data > parent-> data)
                {
                    return Search( parent-> right,data);
                }
            }
        }
    }

    return false;

}
//---------------------------------------------------------------------------------------------------

#endif // BST_H
