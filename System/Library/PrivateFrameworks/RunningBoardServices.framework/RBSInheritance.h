/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSString, NSObject, RBSAssertionIdentifier;

@interface RBSInheritance : NSObject <RBSXPCSecureCoding, NSCopying> {

	NSString* _endowmentNamespace;
	NSString* _environment;
	NSObject*<OS_xpc_object> _encodedEndowment;
	RBSAssertionIdentifier* _originatingIdentifier;
	unsigned long long _originatingAttributePath;
	unsigned long long _hash;

}

@property (nonatomic,copy,readonly) RBSAssertionIdentifier * originatingIdentifier;              //@synthesize originatingIdentifier=_originatingIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long originatingAttributePath;                      //@synthesize originatingAttributePath=_originatingAttributePath - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedEndowment;                        //@synthesize encodedEndowment=_encodedEndowment - In the implementation block
@property (nonatomic,copy,readonly) NSString * endowmentNamespace;                               //@synthesize endowmentNamespace=_endowmentNamespace - In the implementation block
@property (nonatomic,readonly) NSString * environment;                                           //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(RBSAssertionIdentifier *)originatingIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)originatingAttributePath;
-(NSString *)endowmentNamespace;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(NSObject*<OS_xpc_object>)encodedEndowment;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)environment;
-(unsigned long long)hash;
-(NSString *)description;
-(id)_initWithNamespace:(id)arg1 environment:(id)arg2 encodedEndowment:(id)arg3 originatingIdentifier:(id)arg4 attributePath:(unsigned long long)arg5 ;
-(id)endowment;
@end

