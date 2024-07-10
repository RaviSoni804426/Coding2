document.addEventListener('DOMContentLoaded', () => {
    const taskInput=document.getElementById("textinput");
    const  addTaskButton = document.getElementById("addtaskbutton");
    const tasklist=document.getElementById("tasklist");
    
    addTaskButton.addEventListener('click',addTask);
    function addTask(){
        const taskText=taskInput.value.trim();//q1
        if(taskText===""){
            alert("Enter Task Please");
            return;
        }
        const taskItem = document.createElement('li');
        taskItem.textContent=taskText;

        const deleteButton=document.createElement("button");
        deleteButton.textContent="Delete";

        deleteButton.addEventListener("click",()=>{
            tasklist.removeChild(taskItem)
        });
        taskItem.addEventListener("click",()=>{
            taskItem.classList.toogle("completed");//q2
        });
        tasklist.appendChild(deleteButton);
        tasklist.appendChild(taskItem);
        tasklist.removeChild(addTaskButton);
        taskInput.value="";
        

    }
});
    