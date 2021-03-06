/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBKStoreURLBagContext;

@interface SBKRequestHandler : NSObject {

	SBKStoreURLBagContext* _bagContext;

}

@property (nonatomic,readonly) SBKStoreURLBagContext * bagContext;              //@synthesize bagContext=_bagContext - In the implementation block
-(void)cancel;
-(void)timeout;
-(id)initWithBagContext:(id)arg1 ;
-(SBKStoreURLBagContext *)bagContext;
@end

