/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNGeminiInteraction : NSObject {

	long long _transport;
	long long _directionality;
	NSString* _handle;
	NSString* _contactIdentifier;

}

@property (nonatomic,readonly) long long transport;                            //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) long long directionality;                       //@synthesize directionality=_directionality - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                         //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
-(NSString *)handle;
-(NSString *)contactIdentifier;
-(long long)transport;
-(long long)directionality;
-(id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3 destinationContactIdentifier:(id)arg4 ;
-(id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3 ;
@end
