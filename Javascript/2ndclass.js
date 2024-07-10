// const names=["Ravi","Priyanshu","Dinkar"];
// let [name1, , name3]=names;
// console.log(name1, " ", name3);

// const rectangle={
//     width:2,
//     height:3,
//     area:4,


// };
// let{width, height,area}=rectangle;
// console.log(width,height,area);

// const names=[1,2,3,4,5,6,7,8,9];
// let [name1,name2,...a]=names;
// console.log(...a);



// const constants = [2.72, 3.14, 9.81, 37, 100]
// const countries = ['Finland', 'Estonia', 'Sweden', 'Denmark', 'Norway']
// const rectangle = {
//   width: 20,
//   height: 10,
//   area: 200,
//   perimeter: 60
// }
// const users = [
// {
//   name:'Brook',
//   scores:75,
//   skills:['HTM', 'CSS', 'JS'],
//   age:16
// },
// {
//   name:'Alex',
//   scores:80,
//   skills:['HTM', 'CSS', 'JS'],
//   age:18
// },
// {
//   name:'David',
//   scores:75,
//   skills:['HTM', 'CSS'],
//   age:22
// },
// {
//   name:'John',
//   scores:85,
//   skills:['HTML'],
//   age:25
// },
// {
//   name:'Sara',
//   scores:95,
//   skills:['HTM', 'CSS', 'JS'],
//   age: 26
// },
// {
//   name:'Martha',
//   scores:80,
//   skills:['HTM', 'CSS', 'JS'],
//   age:18
// },
// {
//   name:'Thomas',
//   scores:90,
//   skills:['HTM', 'CSS', 'JS'],
//   age:20
// }
// ]
// 1. Destructure and assign the elements of the constants array to e, pi, gravity, humanBodyTemp, and waterBoilingTemp.



// 2. Destructure and assign the elements of countries array to fin, est, sw, den, nor

// 3.Destructure the rectangle object by its properties or keys.



// 4. Iterate through the users array and get all the keys of the object using destructuring

//   5. Find the persons who have less than two skills
// const constants = [2.72, 3.14, 9.81, 37, 100];
// const countries = ['Finland', 'Estonia', 'Sweden', 'Denmark', 'Norway'];
// const rectangle = {
//   width: 20,
//   height: 10,
//   area: 200,
//   perimeter: 60
// };
// const users = [
//   {
//     name: 'Brook',
//     scores: 75,
//     skills: ['HTM', 'CSS', 'JS'],
//     age: 16
//   },
//   {
//     name: 'Alex',
//     scores: 80,
//     skills: ['HTM', 'CSS', 'JS'],
//     age: 18
//   },
//   {
//     name: 'David',
//     scores: 75,
//     skills: ['HTM', 'CSS'],
//     age: 22
//   },
//   {
//     name: 'John',
//     scores: 85,
//     skills: ['HTML'],
//     age: 25
//   },
//   {
//     name: 'Sara',
//     scores: 95,
//     skills: ['HTM', 'CSS', 'JS'],
//     age: 26
//   },
//   {
//     name: 'Martha',
//     scores: 80,
//     skills: ['HTM', 'CSS', 'JS'],
//     age: 18
//   },
//   {
//     name: 'Thomas',
//     scores: 90,
//     skills: ['HTM', 'CSS', 'JS'],
//     age: 20
//   }
// ];

// // Destructuring arrays
// const [e, pi, gravity, humanBodyTemp, waterBoilingTemp] = constants;
// const [fin, est, sw, den, nor] = countries;

// // Destructuring object
// const { width, height, area, perimeter } = rectangle;

// console.log(`e: ${e}, pi: ${pi}, gravity: ${gravity}, humanBodyTemp: ${humanBodyTemp}, waterBoilingTemp: ${waterBoilingTemp}`);
// console.log(`fin: ${fin}, est: ${est}, sw: ${sw}, den: ${den}, nor: ${nor}`);
// console.log(`width: ${width}, height: ${height}, area: ${area}, perimeter: ${perimeter}`);

// // Iterating and destructuring users array
// for (const { name, scores, skills, age } of users) {
//   console.log(`Name: ${name}, Scores: ${scores}, Skills: ${skills.join(', ')}, Age: ${age}`);
// }

// const usersWithLessThanTwoSkills = users.filter(({ skills }) => skills.length < 2);

// console.log('Users with less than two skills:');
// for (const { name, skills } of usersWithLessThanTwoSkills) {
//   console.log(`Name: ${name}, Skills: ${skills.join(', ')}`);
// }






