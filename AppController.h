//
//  AppController.h
//  MyTube
//
//  Created by patrick on 2009/12/12.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class YouTubeVideo;

@interface AppController : NSObject {
    IBOutlet NSTextField* textFieldPageUrl;
    YouTubeVideo* youtubeVideo;
}

- (IBAction) downloadVideo: (id) sender;

@end
