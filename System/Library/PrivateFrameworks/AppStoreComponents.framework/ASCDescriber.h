/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSMutableArray;

@interface ASCDescriber : NSObject {

	id<NSObject> _object;
	NSMutableArray* _properties;

}

@property (nonatomic,readonly) id<NSObject> object;                      //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSMutableArray * properties;              //@synthesize properties=_properties - In the implementation block
+(id)nilObject;
-(id)initWithObject:(id)arg1 ;
-(NSMutableArray *)properties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSObject>)object;
-(id)description;
-(void)addObject:(id)arg1 withName:(id)arg2 ;
-(id)finalizeDescription;
-(void)addBool:(BOOL)arg1 withName:(id)arg2 ;
-(void)addSensitiveObject:(id)arg1 withName:(id)arg2 ;
-(void)addDouble:(double)arg1 withName:(id)arg2 ;
-(void)addUInt64:(unsigned long long)arg1 withName:(id)arg2 ;
-(id)describeObject;
-(id)describeProperties;
-(void)addInteger:(long long)arg1 withName:(id)arg2 ;
-(void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 ;
-(void)addInt64:(long long)arg1 withName:(id)arg2 ;
@end

