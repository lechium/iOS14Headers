/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:24 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface BWObjectLifetimeTracker : NSObject {

	/*^block*/id _deallocHandler;

}
+(id)trackerWithDeallocHandler:(/*^block*/id)arg1 ;
+(void)trackAttachmentBearer:(void*)arg1 deallocHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)initWithDeallocHandler:(/*^block*/id)arg1 ;
@end
