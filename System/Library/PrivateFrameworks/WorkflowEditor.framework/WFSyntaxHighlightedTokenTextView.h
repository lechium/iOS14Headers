/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFTextTokenTextView.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>

@class NSMutableArray, WFSyntaxHighlightingPluginManager, NSString;

@interface WFSyntaxHighlightedTokenTextView : WFTextTokenTextView <NSTextStorageDelegate> {

	NSMutableArray* _lineIndices;
	WFSyntaxHighlightingPluginManager* _pluginManager;

}

@property (nonatomic,retain) WFSyntaxHighlightingPluginManager * pluginManager;              //@synthesize pluginManager=_pluginManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAttributedText:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)init;
-(WFSyntaxHighlightingPluginManager *)pluginManager;
-(void)setVariableString:(id)arg1 ;
-(void)textUpdated;
-(unsigned long long)currentSyntaxHighlightingAppearance;
-(void)updateHighlighting;
-(void)synchronizeTokenManagerWithTextStorage:(id)arg1 ;
-(void)updateLineIndicesForTextStorage:(id)arg1 ;
-(NSRange)lineRangeForCharacterRange:(NSRange)arg1 ;
-(void)setPluginManager:(WFSyntaxHighlightingPluginManager *)arg1 ;
@end

