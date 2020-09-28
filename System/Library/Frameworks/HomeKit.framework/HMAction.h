/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMFUnfairLock, NSUUID, _HMContext, HMActionSet, NSString;

@interface HMAction : NSObject <HMObjectMerge, NSSecureCoding, NSCopying> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSUUID* _uuid;
	_HMContext* _context;
	HMActionSet* _actionSet;

}

@property (nonatomic,retain) _HMContext * context;                          //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long type; 
@property (copy) NSUUID * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (__weak) HMActionSet * actionSet;                                 //@synthesize actionSet=_actionSet - In the implementation block
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) BOOL requiresDeviceUnlock; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(id)initWithUUID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMActionSet *)actionSet;
-(void)setActionSet:(HMActionSet *)arg1 ;
-(void)dealloc;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
-(void)setContext:(_HMContext *)arg1 ;
-(BOOL)_handleUpdates:(id)arg1 ;
-(id)init;
-(NSUUID *)uniqueIdentifier;
-(unsigned long long)type;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_HMContext *)context;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(void)_unconfigureContext;
-(BOOL)requiresDeviceUnlock;
-(void)_unconfigure;
-(id)encodeAsProtoBuf;
@end
