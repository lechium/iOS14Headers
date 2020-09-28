/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMProtocolDeclarationItemsResponse_DeclarationItem : RMModelPayloadBase {

	NSString* _responseIdentifier;
	NSString* _responseServerToken;

}

@property (nonatomic,copy) NSString * responseIdentifier;               //@synthesize responseIdentifier=_responseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * responseServerToken;              //@synthesize responseServerToken=_responseServerToken - In the implementation block
+(id)allowedResponseKeys;
+(id)buildWithIdentifier:(id)arg1 serverToken:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 serverToken:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)responseIdentifier;
-(void)setResponseIdentifier:(NSString *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseServerToken:(NSString *)arg1 ;
-(NSString *)responseServerToken;
@end
