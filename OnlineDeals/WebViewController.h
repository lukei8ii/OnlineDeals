//
//  WebViewController.h
//  OnlineDeals
//
//  Created by Shea Hunter on 8/14/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RSSEntry;

@interface WebViewController : UIViewController {
    UIWebView *_webView;
    RSSEntry *_entry;
}

@property (retain) IBOutlet UIWebView *webView;
@property (retain) RSSEntry *entry;

@end
