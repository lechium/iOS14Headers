/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DOMNode;

@interface DDRange : NSObject {

	DOMNode* _node;
	long long _startOffset;
	long long _endOffset;

}

@property (nonatomic,retain) DOMNode * node;                     //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) long long startOffset;              //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) long long endOffset;                //@synthesize endOffset=_endOffset - In the implementation block
+(id)rangeWithDOMRange:(id)arg1 ;
-(void)setStartOffset:(long long)arg1 ;
-(DOMNode *)node;
-(void)setNode:(DOMNode *)arg1 ;
-(void)dealloc;
-(void)setEndOffset:(long long)arg1 ;
-(id)initWithDOMRange:(id)arg1 ;
-(long long)startOffset;
-(id)description;
-(long long)endOffset;
@end

