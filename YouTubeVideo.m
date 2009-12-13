//
//  YouTubeVideo.m
//  MyTube
//
//  Created by patrick on 2009/12/12.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "YouTubeVideo.h"


@implementation YouTubeVideo

- (YouTubeVideo*)initWithPageUrl: (NSString*)url
{
    [super init];
    pageUrl = [NSString stringWithString: url];
    
    return self;
}

- (NSString*)findVideoLink
{
    return nil;
}

- (void)downloadVideo
{
    NSLog(@"downloadVideo: %@", pageUrl);
}

@end
