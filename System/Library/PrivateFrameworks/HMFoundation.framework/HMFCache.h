/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSURL;

@interface HMFCache : HMFObject {

	BOOL _exists;
	NSURL* _URL;

}

@property (copy,readonly) NSURL * URL;                         //@synthesize URL=_URL - In the implementation block
@property (getter=isExists,readonly) BOOL exists;              //@synthesize exists=_exists - In the implementation block
+(id)defaultCache;
-(id)initWithName:(id)arg1 ;
-(NSURL *)URL;
-(id)init;
-(BOOL)isExists;
@end

