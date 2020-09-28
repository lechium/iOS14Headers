/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBIconModel, NSLock, NSSet;

@interface SBIconVisibilityService : NSObject {

	SBIconModel* _iconModel;
	NSLock* _iconStateDisplayIdentifiersLock;
	NSSet* _iconStateDisplayIdentifiers;

}
-(void)dealloc;
-(id)initWithIconModel:(id)arg1 ;
-(id)iconStateDisplayIdentifiers;
-(void)_visibleIdentifiersChanged:(id)arg1 ;
@end
