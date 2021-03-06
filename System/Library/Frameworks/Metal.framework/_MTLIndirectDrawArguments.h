/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MTLIndirectDrawArguments : NSObject {

	unsigned long long _primitiveType;
	unsigned long long _vertexStart;
	unsigned long long _vertexCount;
	unsigned long long _instanceCount;
	unsigned long long _baseInstance;

}

@property (assign,nonatomic) unsigned long long primitiveType;              //@synthesize primitiveType=_primitiveType - In the implementation block
@property (assign,nonatomic) unsigned long long vertexStart;                //@synthesize vertexStart=_vertexStart - In the implementation block
@property (assign,nonatomic) unsigned long long vertexCount;                //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;              //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) unsigned long long baseInstance;               //@synthesize baseInstance=_baseInstance - In the implementation block
-(unsigned long long)instanceCount;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(unsigned long long)primitiveType;
-(void)setPrimitiveType:(unsigned long long)arg1 ;
-(unsigned long long)vertexStart;
-(void)setVertexStart:(unsigned long long)arg1 ;
-(void)setVertexCount:(unsigned long long)arg1 ;
-(unsigned long long)baseInstance;
-(void)setBaseInstance:(unsigned long long)arg1 ;
-(unsigned long long)vertexCount;
@end

