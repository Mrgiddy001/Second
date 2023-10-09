  double temp;
    char unit;
    double Amount;
    cout<<"********TEMPERATURE CONVERTER********\n";
    cout<<"F= for degrees celcius to degrees farenheit\nT= for degrees farenheit to degrees celcius.\n";
    cout<<"Enter the Unit you want to convert to: ";
    cin>>unit;
    if(unit=='F'|| unit=='f') {
        cout<<"\nEnter the temperatures in degrees Farenheit: ";
        cin>>Amount;
        temp=(Amount*9/5)+32;
        cout<<"\nThe Temperature is "<<temp<<" degrees Farenheit.";
    } else if(unit=='T'|| unit=='t') {
        cout<<"\nEnter the temperatures in degrees Celcius: ";
        cin>>Amount;
        temp=(Amount*5/9)-32;
        cout<<"\nThe Temperature is "<<temp<<" degrees Celcius.";
    } else {
        cout<<"Enter Either 'F' or 'T'";
    }
    cout<<"\n**************************************";
    return 0;
}
