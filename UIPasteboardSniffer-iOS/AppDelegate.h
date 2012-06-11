//
//  AppDelegate.h
//  UIPasteboardSniffer-iOS
//
//  Created by Osamu Noguchi on 6/11/12.
//  Copyright (c) 2012 atrac613.io. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    NSMutableArray *pasteboardHistory;
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSMutableArray *pasteboardHistory;

@end
