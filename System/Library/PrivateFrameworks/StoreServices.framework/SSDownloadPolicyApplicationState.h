/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface SSDownloadPolicyApplicationState : NSObject <NSSecureCoding, SSXPCCoding, NSCopying> {

	NSString* _applicationIdentifier;
	NSSet* _applicationStates;

}

@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * applicationStates;                     //@synthesize applicationStates=_applicationStates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationIdentifier;
-(NSSet *)applicationStates;
-(void)addApplicationState:(long long)arg1 ;
-(void)setNotRunningApplicationStates;
-(void)setApplicationStates:(NSSet *)arg1 ;
-(id)initWithApplicationIdentifier:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

