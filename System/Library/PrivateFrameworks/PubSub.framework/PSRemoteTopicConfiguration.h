/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSSet;

@interface PSRemoteTopicConfiguration : HMFObject {

	NSString* _name;
	NSSet* _supportedTransportIdentifiers;

}

@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSSet * supportedTransportIdentifiers;              //@synthesize supportedTransportIdentifiers=_supportedTransportIdentifiers - In the implementation block
-(NSString *)name;
-(NSSet *)supportedTransportIdentifiers;
-(id)initWithTopicName:(id)arg1 supportedTransportIdentifiers:(id)arg2 ;
@end
