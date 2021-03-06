/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSIGroupCacheDelegate;
@class NSMutableSet;

@interface PSIGroupCache : NSObject {

	NSMutableSet* _groups;
	id<PSIGroupCacheDelegate> _delegate;
	unsigned long long _numberOfGroupsChecked;
	unsigned long long _numberOfGroupsQueried;

}

@property (readonly) unsigned long long numberOfGroupsChecked;              //@synthesize numberOfGroupsChecked=_numberOfGroupsChecked - In the implementation block
@property (readonly) unsigned long long numberOfGroupsQueried;              //@synthesize numberOfGroupsQueried=_numberOfGroupsQueried - In the implementation block
-(unsigned long long)numberOfGroupsQueried;
-(id)initWithDelegate:(id)arg1 ;
-(unsigned long long)numberOfGroupsChecked;
-(unsigned long long)idOfGroupWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out BOOL*)arg5 ;
@end

