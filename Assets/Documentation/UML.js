// async function fetchPlus(url, type = "text"){
//   return new Promise((resolve, reject) => {
//     fetch(url).then(async (res) => {
//       if (res.ok) {
//         return res[type]();
//       }else {
//         throw "error"
//       }
//     }).then((e) => {
//       resolve(e);
//     }).catch((e) => {
//       console.log(e);
//     });
//   });
// }

class UML{
  async load(url) {
    let res = await fetch("./UML_data.JSON");
    if (res.ok) {
      let data = await res.json();

      //Load excerpts html
      let i = 0;
      for (let obj of data) {
        await this.loadExcerpt(obj);
        this[i] = obj;
        this[obj.name] = obj;
        i++;
      }
    }
  }

  async loadExcerpt(obj){
    let excerpt_url = `./CodeExcerpts/${obj.name}.html`;
    let res = await fetch(excerpt_url);
    if (res.ok) {
      let excerpt = await res.text();
      obj["excerpt"] = excerpt;
    }
  }
}

export {UML};
