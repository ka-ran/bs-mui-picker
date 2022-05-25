module C = {
  let log: option(string) => unit = [%bs.raw {|
    function (moment) {
      console.log(moment && moment.valueOf());
    }
  |}];
 
  [@react.component]
  let make = () => {
    let (date, setDate) = React.useState(_ => None);
    log(date);
    <Picker
      tz="Asia/Kolkata"
      date
      handleDateChange={date => setDate(_ => date->Some)}
    />;
  };
};


ReactDOMRe.renderToElementWithId(<C />, "root");