//
//  AppController.m
//  MyTube
//
//  Created by patrick on 2009/12/12.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "AppController.h"
#import "YouTubeVideo.h"

@implementation AppController

- (IBAction)downloadVideo: (id) sender
{
    youtubeVideo = [[YouTubeVideo alloc] initWithPageUrl: [textFieldPageUrl stringValue]];
    
    [youtubeVideo downloadVideo];
    [youtubeVideo release];
    youtubeVideo = nil;
}

@end
