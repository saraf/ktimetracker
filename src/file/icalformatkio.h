/*
 * Copyright (c) 2019 Alexander Potashev <aspotashev@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License or (at your option) version 3 or any later version
 * accepted by the membership of KDE e.V. (or its successor approved
 * by the membership of KDE e.V.), which shall act as a proxy
 * defined in Section 14 of version 3 of the license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KTIMETRACKER_ICALFORMATKIO_H
#define KTIMETRACKER_ICALFORMATKIO_H

#include <KCalCore/ICalFormat>

class ICalFormatKIO : public KCalCore::ICalFormat
{
public:
    ICalFormatKIO() = default;
    ~ICalFormatKIO() override = default;

    /**
     * Read calendar from local or remote file.
     *
     * @param calendar
     * @param urlString Must start with a schema, for example "file:///" or "https://"
     * @return
     */
    bool load(const KCalCore::Calendar::Ptr &calendar, const QString &urlString) override;

    /**
     * Write calendar to local or remote file.
     *
     * @param calendar
     * @param urlString Must start with a schema, for example "file:///" or "https://"
     * @return
     */
    bool save(const KCalCore::Calendar::Ptr &calendar, const QString &urlString) override;
};

#endif // KTIMETRACKER_ICALFORMATKIO_H
