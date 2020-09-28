/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TSDGPUDataArrayBuffer, TSDGPUDataBuffer;

@interface TSDGPUDataBufferAttribute : NSObject {

	BOOL _isNormalized;
	unsigned _bufferUsage;
	int _componentCount;
	int _locationInShader;
	NSString* _name;
	long long _dataType;
	unsigned long long _bufferOffset;
	TSDGPUDataArrayBuffer* _dataArrayBuffer;
	TSDGPUDataBuffer* _dataBuffer;

}

@property (assign,nonatomic) int locationInShader;                                 //@synthesize locationInShader=_locationInShader - In the implementation block
@property (assign,nonatomic) unsigned long long bufferOffset;                      //@synthesize bufferOffset=_bufferOffset - In the implementation block
@property (assign,nonatomic) TSDGPUDataArrayBuffer * dataArrayBuffer;              //@synthesize dataArrayBuffer=_dataArrayBuffer - In the implementation block
@property (assign,nonatomic) TSDGPUDataBuffer * dataBuffer;                        //@synthesize dataBuffer=_dataBuffer - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned bufferUsage;                               //@synthesize bufferUsage=_bufferUsage - In the implementation block
@property (nonatomic,readonly) long long dataType;                                 //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) int componentCount;                                 //@synthesize componentCount=_componentCount - In the implementation block
@property (nonatomic,readonly) BOOL isNormalized;                                  //@synthesize isNormalized=_isNormalized - In the implementation block
+(id)attributeWithName:(id)arg1 bufferUsage:(unsigned)arg2 dataType:(long long)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long long)arg5 ;
-(unsigned long long)bufferOffset;
-(long long)dataType;
-(TSDGPUDataBuffer *)dataBuffer;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setBufferOffset:(unsigned long long)arg1 ;
-(void)setDataBuffer:(TSDGPUDataBuffer *)arg1 ;
-(id)initWithName:(id)arg1 bufferUsage:(unsigned)arg2 dataType:(long long)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long long)arg5 ;
-(int)componentCount;
-(unsigned)bufferUsage;
-(BOOL)isNormalized;
-(void)setBufferUsage:(unsigned)arg1 ;
-(void)setComponentCount:(int)arg1 ;
-(int)locationInShader;
-(void)setLocationInShader:(int)arg1 ;
-(TSDGPUDataArrayBuffer *)dataArrayBuffer;
-(void)setDataArrayBuffer:(TSDGPUDataArrayBuffer *)arg1 ;
@end
