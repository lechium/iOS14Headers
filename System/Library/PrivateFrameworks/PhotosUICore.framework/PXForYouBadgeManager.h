/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableForYouBadgeManager.h>

@class NSString;

@interface PXForYouBadgeManager : PXObservable <PXMutableForYouBadgeManager> {

	unsigned long long _unreadBadgeCount;

}

@property (nonatomic,readonly) unsigned long long unreadBadgeCount;              //@synthesize unreadBadgeCount=_unreadBadgeCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lastSeenBadgeDate;
+(void)setLastSeenBadgeDate:(id)arg1 ;
-(void)_didFinishPostingNotifications:(id)arg1 ;
-(void)setUnreadBadgeCount:(unsigned long long)arg1 ;
-(void)_stopListeningForChanges;
-(void)dealloc;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(unsigned long long)unreadBadgeCount;
-(void)_updateUnreadCount;
-(void)startListeningForChanges;
@end
