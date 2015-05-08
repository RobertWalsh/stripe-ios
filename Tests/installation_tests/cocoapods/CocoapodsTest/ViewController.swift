//
//  ViewController.swift
//  CocoapodsTest
//
//  Created by Jack Flintermann on 5/8/15.
//  Copyright (c) 2015 stripe. All rights reserved.
//

import UIKit
import Stripe

class ViewController: UIViewController {

    override func viewDidLoad() {
        Stripe.setDefaultPublishableKey("test")
        Stripe.paymentRequestWithMerchantIdentifier("test")
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

