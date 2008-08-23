//
//  UserTimelineController.h
//  TwitterFon
//
//  Created by kaz on 8/20/08.
//  Copyright 2008 naan studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserCell.h"
#import "LoadCell.h"
#import "Message.h"
#import "Timeline.h"

@interface UserTimelineController : UITableViewController {
    IBOutlet NSObject*  delegate;

    IBOutlet UserCell*  userCell;
    LoadCell*           loadCell;
    Timeline*           timeline;
    BOOL                isTimelineLoaded;
}

- (void)setMessage:(Message *)message image:(UIImage*)image;

@end