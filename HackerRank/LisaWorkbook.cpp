/*function workbook(n, k, chp) {
    let special = 0;

    let pagesize = k;
    let pageindex = 1;
  
  for(let c = 0 ; c < chp.length ; c += 1){
        //let arr =[];
    
    for(let problem = 1 ; problem <= chp[c] ;problem+=1){
      if(problem == k+1){
      //  arr.push("|");
                k += pagesize;
        pageindex += 1;
      }
      
      if(problem == pageindex){
        special += 1;
        //        arr.push("x");
      }
     // else arr.push(problem);
    }
    
    k = pagesize;
        pageindex += 1;
      //console.log("chapter " , c+1 , " => ",arr.toString());
    }

    return special;
}*/