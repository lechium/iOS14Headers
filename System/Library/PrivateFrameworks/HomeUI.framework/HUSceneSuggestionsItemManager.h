/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFItem, HFActionSetSuggestionItemProvider;

@interface HUSceneSuggestionsItemManager : HFItemManager {

	HFItem* _addCustomSceneItem;
	HFActionSetSuggestionItemProvider* _suggestionItemProvider;

}

@property (nonatomic,retain) HFActionSetSuggestionItemProvider * suggestionItemProvider;              //@synthesize suggestionItemProvider=_suggestionItemProvider - In the implementation block
@property (nonatomic,retain) HFItem * addCustomSceneItem;                                             //@synthesize addCustomSceneItem=_addCustomSceneItem - In the implementation block
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfSections;
-(id)_currentSectionIdentifiers;
-(HFItem *)addCustomSceneItem;
-(void)setAddCustomSceneItem:(HFItem *)arg1 ;
-(void)setSuggestionItemProvider:(HFActionSetSuggestionItemProvider *)arg1 ;
-(HFActionSetSuggestionItemProvider *)suggestionItemProvider;
@end
