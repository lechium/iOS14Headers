/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PXProgrammaticNavigationDestination;

@interface PXProgrammaticNavigationRequest : NSObject {

	PXProgrammaticNavigationDestination* _destination;
	unsigned long long _options;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) PXProgrammaticNavigationDestination * destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                     //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)cancel;
-(PXProgrammaticNavigationDestination *)destination;
-(unsigned long long)options;
-(id)init;
-(id)initWithDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)description;
-(id)completionHandler;
@end
