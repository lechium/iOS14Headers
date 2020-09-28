/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentForwardingActionResponse.h>

@class INIntent, NSDictionary;

@interface INResolveIntentParametersForwardingActionResponse : INIntentForwardingActionResponse {

	BOOL _success;
	INIntent* _updatedIntent;
	NSDictionary* _parameterResolutionResults;

}

@property (getter=isSuccess,nonatomic,readonly) BOOL success;                          //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) INIntent * updatedIntent;                               //@synthesize updatedIntent=_updatedIntent - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterResolutionResults;              //@synthesize parameterResolutionResults=_parameterResolutionResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isSuccess;
-(id)initWithSuccess:(BOOL)arg1 updatedIntent:(id)arg2 parameterResolutionResults:(id)arg3 error:(id)arg4 ;
-(INIntent *)updatedIntent;
-(NSDictionary *)parameterResolutionResults;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
