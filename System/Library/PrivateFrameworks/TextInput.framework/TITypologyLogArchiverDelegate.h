/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>

@class NSMutableSet, NSString;

@interface TITypologyLogArchiverDelegate : NSObject <NSKeyedArchiverDelegate> {

	NSMutableSet* _objects;

}

@property (nonatomic,readonly) NSMutableSet * objects;              //@synthesize objects=_objects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(NSMutableSet *)objects;
-(id)init;
@end

