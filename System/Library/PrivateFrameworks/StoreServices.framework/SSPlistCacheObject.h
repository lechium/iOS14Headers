/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSCacheObject.h>

@class NSDictionary, NSString;

@interface SSPlistCacheObject : NSObject <SSCacheObject> {

	NSDictionary* _plist;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheObjectTypeIdentifier;
-(void)dealloc;
-(id)plist;
-(id)cacheObjectDataRepresentation;
-(id)cacheObjectTypeIdentifier;
-(id)initWithCacheObjectDataRepresentation:(id)arg1 ;
-(void)setPlist:(id)arg1 ;
@end
