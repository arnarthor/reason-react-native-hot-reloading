open ReactNative;

let component = ReasonReact.statelessComponent "Component";

let make _children => {
  ...component,
  render: fun _ => <Text> (ReasonReact.stringToElement "Hello world") </Text>
};

let component = ReasonReact.wrapReasonForJs ::component (fun _ => make [||]);
