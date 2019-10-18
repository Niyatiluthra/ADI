package niyati_ds;

public class ArrayQueue<E> implements Queue<E> 
{
  // instance variables
  /** Default array capacity. */
  public static final int CAPACITY = 1000;      // default array capacity

  /** Generic array used for storage of queue elements. */
  private E[] data;                             // generic array used for storage

  /** Index of the first element of the queue in the array. */
  private int front = -1;                            // index of the front element
  private int rear=-1;
  /** Current number of elements in the queue. */
  private int size = 0;                           // current number of elements

  // constructors
  /** Constructs an empty queue using the default array capacity. */
  public ArrayQueue() 
  { 
  data=(E[])new Object[CAPACITY];
  }         // constructs queue with default capacity

  /**
   * Constructs and empty queue with the given array capacity.
   * @param capacity length of the underlying array
   */
  @SuppressWarnings({"unchecked"})
  public ArrayQueue(int capacity) 
  { 
   data=(E[])new Object[capacity];
  }

  // methods
  /**
   * Returns the number of elements in the queue.
   * @return number of elements in the queue
   */
  @Override
  public int size() 
  { 
  return size;
  }

  /** Tests whether the queue is empty. */
  @Override
  public boolean isEmpty() 
  { 
  	return size==0;
  }

  /**
   * Inserts an element at the rear of the queue.
   * This method runs in O(1) time.
   * @param e   new element to be inserted
   * @throws IllegalStateException if the array storing the elements is full
   */
  @Override
  public void enqueue(E e) throws IllegalStateException 
  {
  	if(size==data.length)
	{
	
	}
	else{
		if(front==-1 && rear==-1){
		    rear++;
		    front++;
		}
		else
		    rear++;
        
        data[rear]=e;
		size++;
	}
  }

  /**
   * Returns, but does not remove, the first element of the queue.
   * @return the first element of the queue (or null if empty)
   */
  @Override
  public E first() 
  {
    if(size!=0)
        return data[front];
    else
        return null;
  }

  /**
   * Removes and returns the first element of the queue.
   * @return element removed (or null if empty)
   */
  @Override
  public E dequeue() 
  {
    if(size==0)
        return null;
    size--;
    E item=data[front];
    front++;
    return item;
  }

  /**
   * Returns a string representation of the queue as a list of elements.
   * This method runs in O(n) time, where n is the size of the queue.
   * @return textual representation of the queue.
   */
  public String toString() 
  {
  	StringBuilder sb = new StringBuilder("(");
    int trav = front;
	int sz = size;
	while(size>0){
	    sb.append(dequeue());
	    sb.append(",");
	}
	front = trav;
	size = sz;
    sb.append(")");
    return sb.toString();
  }
}