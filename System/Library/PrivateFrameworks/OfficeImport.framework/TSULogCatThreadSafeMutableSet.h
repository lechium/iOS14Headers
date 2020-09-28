/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface TSULogCatThreadSafeMutableSet : NSObject {

	NSMutableSet* _objects;
	NSObject*<OS_dispatch_queue> _logCatQueue;

}
-(void)removeObject:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)allObjects;
-(void)addObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)immutableSet;
-(id)init;
-(unsigned long long)count;
-(id)description;
@end
