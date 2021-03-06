/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface KNAnimationRegistry : NSObject {

	NSDictionary* _classesForTypeAndName;
	NSDictionary* _classesForTypeAndCategory;
	NSDictionary* _classesForTypeAndFilter;
	NSDictionary* _classesForTypeAndObsoleteName;
	NSDictionary* _alternateEffectIdentifiersForEffectIdentifierAndFilter;
	NSArray* _animationInfos;

}
+(id)instance;
+(id)localizedNameForUnsupportedAnimation:(id)arg1 ;
+(id)localizedCategoryNameForCategory:(long long)arg1 ;
+(id)animationsInBundle;
+(id)categoryNameForPluginClass:(Class)arg1 ;
-(id)init;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2 includeObsoleteNames:(BOOL)arg3 drawable:(id)arg4 ;
-(id)p_buildAlternateFilterMap;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2 includeObsoleteNames:(BOOL)arg3 ;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2 ;
-(id)distinctCategoriesForType:(long long)arg1 ;
-(id)animationInfosForAnimationType:(long long)arg1 category:(id)arg2 ;
-(id)allAnimationInfos;
-(BOOL)canMapEffectIdentifier:(id)arg1 animationType:(long long)arg2 toEffectIdentifier:(id)arg3 includeObsoleteNames:(BOOL)arg4 forDrawable:(id)arg5 ;
-(id)animationInfosForAnimationType:(long long)arg1 filter:(id)arg2 ;
@end

