type Product = {
    weight: number,
    price: number,
}

type ProductList = {
    [productName: string]: Product,
}

const products: ProductList = {
    laptop: {
        weight: 3,
        price: 1500
    },
    smartphone: {
        weight: 0.5,
        price: 1000
    },
    tablet: {
        weight: 2,
        price: 1200
    },
}

function takeProducts(): number {
    // minimumWeight
    let minimumWeight: number = 1000;
    Object.keys(products).forEach((productName) => {
        let product = products[productName];

        if (product.weight < minimumWeight) {
            minimumWeight = product.weight;
        }
    })

    const bag: number = 3;

    const rows: number = Object.keys(products).length;
    const cols: number = bag / minimumWeight;
    let rowsIndex: number = 0;
    let colsIndex: number = 0;
    let table: number[][];

    Object.keys(products).forEach((productName) => {
        let product = products[productName];

        for (let actualWeight = minimumWeight; actualWeight <= bag; actualWeight + minimumWeight) {
            if ()
        }
    })

    return 10;
}