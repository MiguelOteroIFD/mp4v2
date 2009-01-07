///////////////////////////////////////////////////////////////////////////////
//
//  The contents of this file are subject to the Mozilla Public License
//  Version 1.1 (the "License"); you may not use this file except in
//  compliance with the License. You may obtain a copy of the License at
//  http://www.mozilla.org/MPL/
//
//  Software distributed under the License is distributed on an "AS IS"
//  basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
//  License for the specific language governing rights and limitations
//  under the License.
// 
//  The Original Code is MP4v2.
// 
//  The Initial Developer of the Original Code is Kona Blend.
//  Portions created by Kona Blend are Copyright (C) 2008.
//  All Rights Reserved.
//
//  Contributors:
//      Kona Blend, kona8lend@@gmail.com
//
///////////////////////////////////////////////////////////////////////////////

#include "src/impl.h"

// VStudio idiocy prevents defining template instanced static data
// in a namespace. Workaround it by defining in global scope.
// Other platforms will continue to put things in the proper namespace.
#if defined( _MSC_VER )
using namespace mp4v2::impl::itmf;
#else
namespace mp4v2 { namespace impl { namespace itmf {
#endif

///////////////////////////////////////////////////////////////////////////////

template <>
const EnumBasicType::Entry EnumBasicType::data[] = {
    { mp4v2::impl::itmf::BT_IMPLICIT,  "implicit",  "implicit" },
    { mp4v2::impl::itmf::BT_UTF8,      "utf8",      "UTF-8" },
    { mp4v2::impl::itmf::BT_UTF16,     "utf16",     "UTF-16" },
    { mp4v2::impl::itmf::BT_SJIS,      "sjis",      "S/JIS" },
    { mp4v2::impl::itmf::BT_HTML,      "html",      "HTML" },
    { mp4v2::impl::itmf::BT_XML,       "xml",       "XML" },
    { mp4v2::impl::itmf::BT_UUID,      "uuid",      "UUID" },
    { mp4v2::impl::itmf::BT_ISRC,      "isrc",      "ISRC" },
    { mp4v2::impl::itmf::BT_MI3P,      "mi3p",      "MI3P" },
    { mp4v2::impl::itmf::BT_GIF,       "gif",       "GIF" },
    { mp4v2::impl::itmf::BT_JPEG,      "jpeg",      "JPEG" },
    { mp4v2::impl::itmf::BT_PNG,       "png",       "PNG" },
    { mp4v2::impl::itmf::BT_URL,       "url",       "URL" },
    { mp4v2::impl::itmf::BT_DURATION,  "duration",  "duration" },
    { mp4v2::impl::itmf::BT_DATETIME,  "datetime",  "date/time" },
    { mp4v2::impl::itmf::BT_GENRES,    "genres",    "genres" },
    { mp4v2::impl::itmf::BT_INTEGER,   "integer",   "integer" },
    { mp4v2::impl::itmf::BT_RIAA_PA,   "riaapa",    "RIAA-PA" },
    { mp4v2::impl::itmf::BT_UPC,       "upc",       "UPC" },
    { mp4v2::impl::itmf::BT_BMP,       "bmp",       "BMP" },

    { mp4v2::impl::itmf::BT_UNDEFINED } // must be last
};

///////////////////////////////////////////////////////////////////////////////

template <>
const EnumGenreType::Entry EnumGenreType::data[] = {
    { mp4v2::impl::itmf::GENRE_BLUES,             "blues",             "Blues" },
    { mp4v2::impl::itmf::GENRE_CLASSIC_ROCK,      "classicrock",       "Classic Rock" },
    { mp4v2::impl::itmf::GENRE_COUNTRY,           "country",           "Country" },
    { mp4v2::impl::itmf::GENRE_DANCE,             "dance",             "Dance" },
    { mp4v2::impl::itmf::GENRE_DISCO,             "disco",             "Disco" },
    { mp4v2::impl::itmf::GENRE_FUNK,              "funk",              "Funk" },
    { mp4v2::impl::itmf::GENRE_GRUNGE,            "grunge",            "Grunge" },
    { mp4v2::impl::itmf::GENRE_HIP_HOP,           "hiphop",            "Hop-Hop" },
    { mp4v2::impl::itmf::GENRE_JAZZ,              "jazz",              "Jazz" },
    { mp4v2::impl::itmf::GENRE_METAL,             "metal",             "Metal" },
    { mp4v2::impl::itmf::GENRE_NEW_AGE,           "newage",            "New Age" },
    { mp4v2::impl::itmf::GENRE_OLDIES,            "oldies",            "Oldies" },
    { mp4v2::impl::itmf::GENRE_OTHER,             "other",             "Other" },
    { mp4v2::impl::itmf::GENRE_POP,               "pop",               "Pop" },
    { mp4v2::impl::itmf::GENRE_R_AND_B,           "rand_b",            "R&B" },
    { mp4v2::impl::itmf::GENRE_RAP,               "rap",               "Rap" },
    { mp4v2::impl::itmf::GENRE_REGGAE,            "reggae",            "Reggae" },
    { mp4v2::impl::itmf::GENRE_ROCK,              "rock",              "Rock" },
    { mp4v2::impl::itmf::GENRE_TECHNO,            "techno",            "Techno" },
    { mp4v2::impl::itmf::GENRE_INDUSTRIAL,        "industrial",        "Industrial" },
    { mp4v2::impl::itmf::GENRE_ALTERNATIVE,       "alternative",       "Alternative" },
    { mp4v2::impl::itmf::GENRE_SKA,               "ska",               "Ska" },
    { mp4v2::impl::itmf::GENRE_DEATH_METAL,       "deathmetal",        "Death Metal" },
    { mp4v2::impl::itmf::GENRE_PRANKS,            "pranks",            "Pranks" },
    { mp4v2::impl::itmf::GENRE_SOUNDTRACK,        "soundtrack",        "Soundtrack" },
    { mp4v2::impl::itmf::GENRE_EURO_TECHNO,       "eurotechno",        "Euro-Techno" },
    { mp4v2::impl::itmf::GENRE_AMBIENT,           "ambient",           "Ambient" },
    { mp4v2::impl::itmf::GENRE_TRIP_HOP,          "triphop",           "Trip-Hop" },
    { mp4v2::impl::itmf::GENRE_VOCAL,             "vocal",             "Vocal" },
    { mp4v2::impl::itmf::GENRE_JAZZ_FUNK,         "jazzfunk",          "Jazz+Funk" },
    { mp4v2::impl::itmf::GENRE_FUSION,            "fusion",            "Fusion" },
    { mp4v2::impl::itmf::GENRE_TRANCE,            "trance",            "Trance" },
    { mp4v2::impl::itmf::GENRE_CLASSICAL,         "classical",         "Classical" },
    { mp4v2::impl::itmf::GENRE_INSTRUMENTAL,      "instrumental",      "Instrumental" },
    { mp4v2::impl::itmf::GENRE_ACID,              "acid",              "Acid" },
    { mp4v2::impl::itmf::GENRE_HOUSE,             "house",             "House" },
    { mp4v2::impl::itmf::GENRE_GAME,              "game",              "Game" },
    { mp4v2::impl::itmf::GENRE_SOUND_CLIP,        "soundclip",         "Sound Clip" },
    { mp4v2::impl::itmf::GENRE_GOSPEL,            "gospel",            "Gospel" },
    { mp4v2::impl::itmf::GENRE_NOISE,             "noise",             "Noise" },
    { mp4v2::impl::itmf::GENRE_ALTERNROCK,        "alternrock",        "AlternRock" },
    { mp4v2::impl::itmf::GENRE_BASS,              "bass",              "Bass" },
    { mp4v2::impl::itmf::GENRE_SOUL,              "soul",              "Soul" },
    { mp4v2::impl::itmf::GENRE_PUNK,              "punk",              "Punk" },
    { mp4v2::impl::itmf::GENRE_SPACE,             "space",             "Space" },
    { mp4v2::impl::itmf::GENRE_MEDITATIVE,        "meditative",        "Meditative" },
    { mp4v2::impl::itmf::GENRE_INSTRUMENTAL_POP,  "instrumentalpop",   "Instrumental Pop" },
    { mp4v2::impl::itmf::GENRE_INSTRUMENTAL_ROCK, "instrumentalrock",  "Instrumental Rock" },
    { mp4v2::impl::itmf::GENRE_ETHNIC,            "ethnic",            "Ethnic" },
    { mp4v2::impl::itmf::GENRE_GOTHIC,            "gothic",            "Gothic" },
    { mp4v2::impl::itmf::GENRE_DARKWAVE,          "darkwave",          "Darkwave" },
    { mp4v2::impl::itmf::GENRE_TECHNO_INDUSTRIAL, "technoindustrial",  "Techno-Industrial" },
    { mp4v2::impl::itmf::GENRE_ELECTRONIC,        "electronic",        "Electronic" },
    { mp4v2::impl::itmf::GENRE_POP_FOLK,          "popfolk",           "Pop-Folk" },
    { mp4v2::impl::itmf::GENRE_EURODANCE,         "eurodance",         "Eurodance" },
    { mp4v2::impl::itmf::GENRE_DREAM,             "dream",             "Dream" },
    { mp4v2::impl::itmf::GENRE_SOUTHERN_ROCK,     "southernrock",      "Southern Rock" },
    { mp4v2::impl::itmf::GENRE_COMEDY,            "comedy",            "Comedy" },
    { mp4v2::impl::itmf::GENRE_CULT,              "cult",              "Cult" },
    { mp4v2::impl::itmf::GENRE_GANGSTA,           "gangsta",           "Gangsta" },
    { mp4v2::impl::itmf::GENRE_TOP_40,            "top40",             "Top 40" },
    { mp4v2::impl::itmf::GENRE_CHRISTIAN_RAP,     "christianrap",      "Christian Rap" },
    { mp4v2::impl::itmf::GENRE_POP_FUNK,          "popfunk",           "Pop/Funk" },
    { mp4v2::impl::itmf::GENRE_JUNGLE,            "jungle",            "Jungle" },
    { mp4v2::impl::itmf::GENRE_NATIVE_AMERICAN,   "nativeamerican",    "Native American" },
    { mp4v2::impl::itmf::GENRE_CABARET,           "cabaret",           "Cabaret" },
    { mp4v2::impl::itmf::GENRE_NEW_WAVE,          "newwave",           "New Wave" },
    { mp4v2::impl::itmf::GENRE_PSYCHEDELIC,       "psychedelic",       "Psychedelic" },
    { mp4v2::impl::itmf::GENRE_RAVE,              "rave",              "Rave" },
    { mp4v2::impl::itmf::GENRE_SHOWTUNES,         "showtunes",         "Showtunes" },
    { mp4v2::impl::itmf::GENRE_TRAILER,           "trailer",           "Trailer" },
    { mp4v2::impl::itmf::GENRE_LO_FI,             "lofi",              "Lo-Fi" },
    { mp4v2::impl::itmf::GENRE_TRIBAL,            "tribal",            "Tribal" },
    { mp4v2::impl::itmf::GENRE_ACID_PUNK,         "acidpunk",          "Acid Punk" },
    { mp4v2::impl::itmf::GENRE_ACID_JAZZ,         "acidjazz",          "Acid Jazz" },
    { mp4v2::impl::itmf::GENRE_POLKA,             "polka",             "Polka" },
    { mp4v2::impl::itmf::GENRE_RETRO,             "retro",             "Retro" },
    { mp4v2::impl::itmf::GENRE_MUSICAL,           "musical",           "Musical" },
    { mp4v2::impl::itmf::GENRE_ROCK_AND_ROLL,     "rockand_roll",      "Rock & Roll" },

    { mp4v2::impl::itmf::GENRE_HARD_ROCK,         "hardrock",          "Hard Rock" },
    { mp4v2::impl::itmf::GENRE_FOLK,              "folk",              "Folk" },
    { mp4v2::impl::itmf::GENRE_FOLK_ROCK,         "folkrock",          "Folk-Rock" },
    { mp4v2::impl::itmf::GENRE_NATIONAL_FOLK,     "nationalfolk",      "National Folk" },
    { mp4v2::impl::itmf::GENRE_SWING,             "swing",             "Swing" },
    { mp4v2::impl::itmf::GENRE_FAST_FUSION,       "fastfusion",        "Fast Fusion" },
    { mp4v2::impl::itmf::GENRE_BEBOB,             "bebob",             "Bebob" },
    { mp4v2::impl::itmf::GENRE_LATIN,             "latin",             "Latin" },
    { mp4v2::impl::itmf::GENRE_REVIVAL,           "revival",           "Revival" },
    { mp4v2::impl::itmf::GENRE_CELTIC,            "celtic",            "Celtic" },
    { mp4v2::impl::itmf::GENRE_BLUEGRASS,         "bluegrass",         "Bluegrass" },
    { mp4v2::impl::itmf::GENRE_AVANTGARDE,        "avantgarde",        "Avantgarde" },
    { mp4v2::impl::itmf::GENRE_GOTHIC_ROCK,       "gothicrock",        "Gothic Rock" },
    { mp4v2::impl::itmf::GENRE_PROGRESSIVE_ROCK,  "progressiverock",   "Progresive Rock" },
    { mp4v2::impl::itmf::GENRE_PSYCHEDELIC_ROCK,  "psychedelicrock",   "Psychedelic Rock" },
    { mp4v2::impl::itmf::GENRE_SYMPHONIC_ROCK,    "symphonicrock",     "SYMPHONIC_ROCK" },
    { mp4v2::impl::itmf::GENRE_SLOW_ROCK,         "slowrock",          "Slow Rock" },
    { mp4v2::impl::itmf::GENRE_BIG_BAND,          "bigband",           "Big Band" },
    { mp4v2::impl::itmf::GENRE_CHORUS,            "chorus",            "Chorus" },
    { mp4v2::impl::itmf::GENRE_EASY_LISTENING,    "easylistening",     "Easy Listening" },
    { mp4v2::impl::itmf::GENRE_ACOUSTIC,          "acoustic",          "Acoustic" },
    { mp4v2::impl::itmf::GENRE_HUMOUR,            "humour",            "Humor" },
    { mp4v2::impl::itmf::GENRE_SPEECH,            "speech",            "Speech" },
    { mp4v2::impl::itmf::GENRE_CHANSON,           "chanson",           "Chason" },
    { mp4v2::impl::itmf::GENRE_OPERA,             "opera",             "Opera" },
    { mp4v2::impl::itmf::GENRE_CHAMBER_MUSIC,     "chambermusic",      "Chamber Music" },
    { mp4v2::impl::itmf::GENRE_SONATA,            "sonata",            "Sonata" },
    { mp4v2::impl::itmf::GENRE_SYMPHONY,          "symphony",          "Symphony" },
    { mp4v2::impl::itmf::GENRE_BOOTY_BASS,        "bootybass",         "Booty Bass" },
    { mp4v2::impl::itmf::GENRE_PRIMUS,            "primus",            "Primus" },
    { mp4v2::impl::itmf::GENRE_PORN_GROOVE,       "porngroove",        "Porn Groove" },
    { mp4v2::impl::itmf::GENRE_SATIRE,            "satire",            "Satire" },
    { mp4v2::impl::itmf::GENRE_SLOW_JAM,          "slowjam",           "Slow Jam" },
    { mp4v2::impl::itmf::GENRE_CLUB,              "club",              "Club" },
    { mp4v2::impl::itmf::GENRE_TANGO,             "tango",             "Tango" },
    { mp4v2::impl::itmf::GENRE_SAMBA,             "samba",             "Samba" },
    { mp4v2::impl::itmf::GENRE_FOLKLORE,          "folklore",          "Folklore" },
    { mp4v2::impl::itmf::GENRE_BALLAD,            "ballad",            "Ballad" },
    { mp4v2::impl::itmf::GENRE_POWER_BALLAD,      "powerballad",       "Power Ballad" },
    { mp4v2::impl::itmf::GENRE_RHYTHMIC_SOUL,     "rhythmicsoul",      "Rhythmic Soul" },
    { mp4v2::impl::itmf::GENRE_FREESTYLE,         "freestyle",         "Freestyle" },
    { mp4v2::impl::itmf::GENRE_DUET,              "duet",              "Duet" },
    { mp4v2::impl::itmf::GENRE_PUNK_ROCK,         "punkrock",          "Punk Rock" },
    { mp4v2::impl::itmf::GENRE_DRUM_SOLO,         "drumsolo",          "Drum Solo" },
    { mp4v2::impl::itmf::GENRE_A_CAPELLA,         "acapella",          "A capella" },
    { mp4v2::impl::itmf::GENRE_EURO_HOUSE,        "eurohouse",         "Euro-House" },
    { mp4v2::impl::itmf::GENRE_DANCE_HALL,        "dancehall",         "Dance Hall" },
    { mp4v2::impl::itmf::GENRE_NONE,              "none",              "none" },

    { mp4v2::impl::itmf::GENRE_UNDEFINED } // must be last
};

///////////////////////////////////////////////////////////////////////////////

template <>
const EnumStikType::Entry EnumStikType::data[] = {
    { mp4v2::impl::itmf::STIK_MOVIE,        "movie",       "Movie" },
    { mp4v2::impl::itmf::STIK_NORMAL,       "normal",      "Normal" },
    { mp4v2::impl::itmf::STIK_AUDIOBOOK,    "audiobook",   "Audio Book" },
    { mp4v2::impl::itmf::STIK_MUSIC_VIDEO,  "musicvideo",  "Music Video" },
    { mp4v2::impl::itmf::STIK_SHORT_FILM,   "shortfilm",   "Short Film" },
    { mp4v2::impl::itmf::STIK_TV_SHOW,      "tvshow",      "TV Show" },
    { mp4v2::impl::itmf::STIK_BOOKLET,      "booklet",     "Booklet" },

    { mp4v2::impl::itmf::STIK_UNDEFINED } // must be last
};

///////////////////////////////////////////////////////////////////////////////

#if defined( _MSC_VER )
namespace mp4v2 { namespace impl { namespace itmf {
#endif

///////////////////////////////////////////////////////////////////////////////

// must come after static data init
const EnumBasicType enumBasicType;
const EnumGenreType enumGenreType;
const EnumStikType enumStikType;

///////////////////////////////////////////////////////////////////////////////

namespace {
    struct ImageHeader {
        BasicType type;
        string    data;
    };

    // POD static init does not need singletons
    static ImageHeader IMAGE_HEADERS[] = {
        { BT_BMP,  "\x4d\x42" },
        { BT_GIF,  "GIF87a" },
        { BT_GIF,  "GIF89a" },
        { BT_JPEG, "\xff\xd8\xff\xe0" },
        { BT_PNG,  "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a" },
        { BT_UNDEFINED } // must be last
    };
}

BasicType
computeBasicType( const void* buffer, uint32_t size )
{
    ImageHeader* found = NULL;
    for( ImageHeader* p = IMAGE_HEADERS; p->type != BT_UNDEFINED; p++ ) {
        ImageHeader& h = *p;

        if( size < h.data.size() )
            continue;

        if( memcmp(h.data.data(), buffer, h.data.size()) == 0 ) {
            found = &h;
            break;
        }
    }

    return found ? found->type : BT_IMPLICIT;
}

///////////////////////////////////////////////////////////////////////////////

}}} // namespace mp4v2::impl::itmf