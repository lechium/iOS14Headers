/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVStreamDataParserOutputHandling.h>

@class AVStreamDataParser, NSString;

@interface WebAVStreamDataParserListener : NSObject <AVStreamDataParserOutputHandling> {

	SourceBufferParserAVFObjC* _parent;
	AVStreamDataParser* _parser;

}

@property (assign) SourceBufferParserAVFObjC* parent;               //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setParent:(SourceBufferParserAVFObjC*)arg1 ;
-(void)invalidate;
-(SourceBufferParserAVFObjC*)parent;
-(void)dealloc;
-(id)initWithParser:(id)arg1 parent:(SourceBufferParserAVFObjC*)arg2 ;
-(void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 ;
-(void)streamDataParser:(id)arg1 didFailToParseStreamDataWithError:(id)arg2 ;
-(void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 withDiscontinuity:(BOOL)arg3 ;
-(void)streamDataParser:(id)arg1 didProvideMediaData:(opaqueCMSampleBufferRef)arg2 forTrackID:(int)arg3 mediaType:(id)arg4 flags:(unsigned long long)arg5 ;
-(void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)arg1 forTrackID:(int)arg2 ;
-(void)streamDataParser:(id)arg1 didProvideContentKeyRequestInitializationData:(id)arg2 forTrackID:(int)arg3 ;
@end
