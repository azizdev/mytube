//
//  MyTubeAppDelegate.h
//  MyTube
//
//  Created by patrick on 2009/12/12.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MyTubeAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
    IBOutlet NSTextField* textFieldPageUrl;
}

@property (assign) IBOutlet NSWindow *window;
- (IBAction) downloadVideo;

@end
