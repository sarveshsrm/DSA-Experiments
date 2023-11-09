typedef char DATA;
 
struct node
{
	DATA d;
	struct node *left;
	struct node *right;
};
 
typedef struct node NODE;
typedef NODE *BTREE;
 
static BTREE new_node(void);
static BTREE init_node(DATA d, BTREE p1, BTREE p2);
static BTREE create_tree(DATA a[], int i, int size);
static void preorder (BTREE root);
static void inorder (BTREE root);
static void postorder (BTREE root);