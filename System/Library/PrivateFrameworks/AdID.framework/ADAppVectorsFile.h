/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AdID/AdID-Structs.h>
@class NSString;

@interface ADAppVectorsFile : NSObject {

	unsigned _nextIndex;
	unsigned long long _numberOfVectors;
	NSString* _vectorVersion;
	_sFILE* _file;

}

@property (assign,nonatomic) unsigned long long numberOfVectors;              //@synthesize numberOfVectors=_numberOfVectors - In the implementation block
@property (nonatomic,copy) NSString * vectorVersion;                          //@synthesize vectorVersion=_vectorVersion - In the implementation block
@property (assign,nonatomic) _sFILE* file;                                    //@synthesize file=_file - In the implementation block
@property (assign,nonatomic) unsigned nextIndex;                              //@synthesize nextIndex=_nextIndex - In the implementation block
-(void)setFile:(_sFILE*)arg1 ;
-(unsigned)nextIndex;
-(void)dealloc;
-(_sFILE*)file;
-(id)initForReadingContentsOfURL:(id)arg1 version:(id)arg2 ;
-(id)nextVector;
-(unsigned long long)numberOfVectors;
-(NSString *)vectorVersion;
-(void)setNumberOfVectors:(unsigned long long)arg1 ;
-(void)setVectorVersion:(NSString *)arg1 ;
-(void)setNextIndex:(unsigned)arg1 ;
@end
