//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SharedDataMigration : NSObject
{
}

+ (_Bool)migrateThumbnails;	// IMP=0x00000001000b3638
+ (_Bool)migrateRecentSearches;	// IMP=0x00000001000b35c0
+ (void)migratePersistentStorageDefaults;	// IMP=0x00000001000b3478
+ (_Bool)_migrateCacheFileFromSubpath:(id)arg1 toSubpath:(id)arg2 ensureIsDirectory:(_Bool)arg3;	// IMP=0x00000001000b3028
+ (id)_userCachesDirectoryPath;	// IMP=0x00000001000b2fac

@end
