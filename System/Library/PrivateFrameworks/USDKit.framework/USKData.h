/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <USDKit/USDKit-Structs.h>
@class NSString, NSData;

@interface USKData : NSObject {

	VtValue* _value;
	NSString* _type;
	unsigned long long _arraySize;

}

@property (nonatomic,readonly) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long arraySize;              //@synthesize arraySize=_arraySize - In the implementation block
@property (nonatomic,retain,readonly) NSData * dataNoCopy; 
-(id)initWithURL:(id)arg1 ;
-(id)urlValue;
-(id)initWithToken:(id)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(BOOL)boolValue;
-(double)doubleValue;
-(id)resourcePath;
-(void)setValue:(VtValue*)arg1 ;
-(float)floatValue;
-(void)setIntValue:(int)arg1 ;
-(void)setStringValue:(id)arg1 ;
-(id)stringValue;
-(id)initWithDouble:(double)arg1 ;
-(void)setResourcePath:(id)arg1 ;
-(id)stringArray;
-(id)initWithString:(id)arg1 ;
-(NSString *)type;
-(id)initWithStringArray:(id)arg1 ;
-(VtValue*)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
-(1)float2Value;
-(1)float3Value;
-(1)float4Value;
-(id)initWithBool:(BOOL)arg1 ;
-(id)initWithFloat:(float)arg1 ;
-(unsigned long long)hash;
-(int)intValue;
-(id)initWithInt:(int)arg1 ;
-(void)setFloatValue:(float)arg1 ;
-(void)setURLValue:(id)arg1 ;
-(void)setFloat2Value:;
-(void)setFloat3Value:;
-(void)setFloat4Value:;
-(void)setDouble4x4Array:(SCD_Struct_US15*)arg1 count:(unsigned long long)arg2 ;
-(NSData *)dataNoCopy;
-(1)double3Value;
-(void)setTokenValue:(id)arg1 ;
-(void)setTokenArray:(id)arg1 ;
-(void)setDouble3Value:;
-(void)setQuatfValue:({?=})arg1 ;
-(id)initWithObjectPath:(id)arg1 ;
-(id)tokenValue;
-(void)setStringArray:(id)arg1 ;
-(void)setIntArray:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setFloat3Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)setFloat2Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)setDouble4x4Value:(SCD_Struct_US15)arg1 ;
-(void)setFloatArray:(float*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)arraySize;
-(unsigned long long)floatArray:(float*)arg1 maxCount:(unsigned long long)arg2 ;
-(id)timeCodeValue;
-(SCD_Struct_US15)double4x4Value;
-(id)initWithFloat3:;
-(id)initWithFloat4:;
-(unsigned long long)double4x4Array:(SCD_Struct_US15*)arg1 maxCount:(unsigned long long)arg2 ;
-(id)initWithUInt:(unsigned)arg1 ;
-(id)tokenArray;
-(id)initWithVtValue:(VtValue*)arg1 typeName:(TfToken*)arg2 ;
-(unsigned)uintValue;
-(SCD_Struct_US15)float4x4Value;
-(1)double2Value;
-(1)double4Value;
-({?=})quatfValue;
-(id)objectPathValue;
-(unsigned long long)intArray:(int*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)uintArray:(unsigned*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)quatfArray:({?=}*)arg1 maxCount:(unsigned long long)arg2 ;
-(id)pathArray;
-(id)resourcePathArray;
-(unsigned long long)float2Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)float3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)float4Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)float4x4Array:(SCD_Struct_US15*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)doubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)double2Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)double3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)double4Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setTimeCodeValue:(id)arg1 ;
-(void)setUIntValue:(unsigned)arg1 ;
-(void)setObjectPathValue:(id)arg1 ;
-(void)setDouble2Value:;
-(void)setDouble4Value:;
-(void)setUIntArray:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setQuatfArray:({?=}*)arg1 count:(unsigned long long)arg2 ;
-(void)setResourcePathArray:(id)arg1 ;
-(void)setFloat4Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)setDoubleArray:(double*)arg1 count:(unsigned long long)arg2 ;
-(void)setDouble2Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)setDouble3Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)setDouble4Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithTimeCode:(id)arg1 ;
-(id)initWithResourcePath:(id)arg1 ;
-(id)initWithFloat2:;
-(id)initWithDouble2:;
-(id)initWithDouble3:;
-(id)initWithDouble4:;
-(id)initWithDouble4x4:(SCD_Struct_US15)arg1 ;
-(id)initWithQuatf:({?=})arg1 ;
-(id)initWithIntArray:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithUIntArray:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithQuatfArray:({?=}*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithTokenArray:(id)arg1 ;
-(id)initWithResourcePathArray:(id)arg1 ;
-(id)initWithFloatArray:(float*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithFloat2Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithFloat3Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithFloat4Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDoubleArray:(double*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDouble2Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDouble3Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDouble4Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDouble4x4Array:(SCD_Struct_US15*)arg1 count:(unsigned long long)arg2 ;
@end
