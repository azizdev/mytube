//
//  YouTubeVideo.h
//  MyTube
//
//  Created by patrick on 2009/12/12.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface YouTubeVideo : NSObject {

}

- (void)initWithPageUrl: (NSString*)url;
- (NSString*)findVideoLink;
- (void)downloadVideo;

@end
