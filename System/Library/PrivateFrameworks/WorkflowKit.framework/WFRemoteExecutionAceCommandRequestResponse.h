/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>
#import <libobjc.A.dylib/WFPBCodable.h>

@class NSString, NSDictionary, NSError;

@interface WFRemoteExecutionAceCommandRequestResponse : WFRemoteExecutionRequest <WFPBCodable> {

	NSString* _originatingRequestIdentifier;
	NSDictionary* _aceCommandResponseDictionary;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * originatingRequestIdentifier;                  //@synthesize originatingRequestIdentifier=_originatingRequestIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * aceCommandResponseDictionary;              //@synthesize aceCommandResponseDictionary=_aceCommandResponseDictionary - In the implementation block
@property (nonatomic,readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)version;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSError *)error;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(id)initWithOriginatingRequestIdentifier:(id)arg1 aceCommandResponseDictionary:(id)arg2 error:(id)arg3 ;
-(NSString *)originatingRequestIdentifier;
-(NSDictionary *)aceCommandResponseDictionary;
@end
