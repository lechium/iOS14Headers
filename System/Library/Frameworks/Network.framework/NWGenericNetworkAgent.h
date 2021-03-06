/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@class NSString, NSUUID;

@interface NWGenericNetworkAgent : NSObject <NWPrettyDescription> {

	netagent* _internalNetagent;

}

@property (assign) netagent* internalNetagent;                                             //@synthesize internalNetagent=_internalNetagent - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) NSString * agentDomain; 
@property (nonatomic,readonly) NSString * agentType; 
@property (nonatomic,readonly) NSString * agentDescription; 
@property (nonatomic,readonly) NSUUID * agentUUID; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isKernelActivated,nonatomic,readonly) BOOL kernelActivated; 
@property (getter=isUserActivated,nonatomic,readonly) BOOL userActivated; 
@property (getter=isVoluntary,nonatomic,readonly) BOOL voluntary; 
@property (getter=isSpecificUseOnly,nonatomic,readonly) BOOL specificUseOnly; 
@property (getter=isNetworkProvider,nonatomic,readonly) BOOL networkProvider; 
-(NSString *)agentType;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)privateDescription;
-(BOOL)isKernelActivated;
-(void)dealloc;
-(BOOL)isActive;
-(BOOL)isVoluntary;
-(NSString *)agentDomain;
-(BOOL)isUserActivated;
-(NSUUID *)agentUUID;
-(id)initWithKernelAgent:(const netagent*)arg1 ;
-(BOOL)supportsBrowse;
-(BOOL)supportsResolve;
-(netagent*)internalNetagent;
-(void)setInternalNetagent:(netagent*)arg1 ;
-(NSString *)agentDescription;
-(BOOL)isNexusProvider;
-(BOOL)isSpecificUseOnly;
-(BOOL)isNetworkProvider;
-(BOOL)requiresAssert;
-(id)description;
@end

