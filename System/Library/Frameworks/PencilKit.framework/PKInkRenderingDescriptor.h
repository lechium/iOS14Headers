/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PKInkParticleDescriptor;

@interface PKInkRenderingDescriptor : NSObject {

	NSString* _identifier;
	unsigned long long _version;
	unsigned long long _type;
	unsigned long long _blendMode;
	PKInkParticleDescriptor* _particleDescriptor;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long blendMode;                              //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) PKInkParticleDescriptor * particleDescriptor;              //@synthesize particleDescriptor=_particleDescriptor - In the implementation block
-(NSString *)identifier;
-(unsigned long long)version;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setBlendMode:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(unsigned long long)blendMode;
-(void)setType:(unsigned long long)arg1 ;
-(PKInkParticleDescriptor *)particleDescriptor;
-(void)setParticleDescriptor:(PKInkParticleDescriptor *)arg1 ;
@end
